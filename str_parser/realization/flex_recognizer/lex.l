%option noyywrap
%option c++
%x NEWOPERNAME FIRSTOPER SECOPER GETEQALSIGN SIGN TAIL
%{
    #define DEFAULT "int"
    #include <string>
    #include <vector>
    std::vector<std::string> vector;
%}

%%
<INITIAL>{
[ ]+ {}
(int|short|long) {vector.clear(); vector.push_back(yytext); BEGIN (NEWOPERNAME);}
([a-zA-Z][a-zA-Z0-9]{0,15}) { vector.clear(); vector.push_back(DEFAULT);  vector.push_back(yytext); BEGIN (GETEQALSIGN);}
. { return 0; }
}

<NEWOPERNAME>{
[ ]+ {}
([a-zA-Z][a-zA-Z0-9]{0,15}) { vector.push_back(yytext); BEGIN (GETEQALSIGN);}
. { BEGIN(INITIAL); return 0; }
}

<GETEQALSIGN>{
[ ]+ {}
:= {BEGIN (FIRSTOPER);}
. {  BEGIN(INITIAL); return 0; }
}

<FIRSTOPER>{
[ ]+ {}
([a-zA-Z][a-zA-Z0-9]{0,15})|([0-9]+) { vector.push_back(yytext); BEGIN (SIGN); }
. {  BEGIN(INITIAL); return 0; }
}

<SIGN>{
[ ]+ {}
[\+\-\*\/] { BEGIN (SECOPER); }
. { BEGIN(INITIAL); return 0; }
}

<SECOPER>{
[ ]+ {}
([a-zA-Z][a-zA-Z0-9]{0,15})|([0-9]+) { vector.push_back(yytext); BEGIN (TAIL); }
. { BEGIN(INITIAL); return 0; }
}

<TAIL>{
[ ]*\n { return 1;}
. {  BEGIN(INITIAL); return 0;}
}

%%