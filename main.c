#include <stdio.h>

#include "ast.h"

#include "ast_printer.h"

#include "parser.tab.h"

<<<<<<< HEAD
#include "typecheck.h"

extern FILE *yyout;  // the output of flex

extern T_prog program_ast;  // the output of bison
=======
extern FILE *yyout;  // the output of flex

extern T_prog program_ast;  // the output of bison

>>>>>>> 5bc3c3b290f0e2228f039ba62889af205e65914d
int main(int argc, char **argv) {
  /* while (1) { */
  /*   yylex(); */
  /* } */

  // print input program and parse errors to stderr
  yyout = stderr;

  // kick off the parser, which will store the result in program_ast
  yyparse();
<<<<<<< HEAD
  // print the ast
	check_prog(program_ast);
=======
>>>>>>> 5bc3c3b290f0e2228f039ba62889af205e65914d

  // print the ast
  print_prog(program_ast, 0);
}
