
%option noyywrap
%option c++
%x SERVER TAIL
%{
    #include <string>
    std::string str;
%}

%%
<INITIAL>{
^(?i:ftp\:\/\/[a-z]{1,20}@) BEGIN (SERVER);
\n return 0;
.;
}
<SERVER>{
(?i:[a-z]{1,20})/(?i:\.([a-z]{1,20}\.)*[a-z]{1,5})\n {BEGIN (TAIL); str += yytext; return 1;}
. BEGIN(INITIAL);
\n {BEGIN(INITIAL); return 0;}
}
<TAIL>{
.;
\n BEGIN(INITIAL);
}
%%