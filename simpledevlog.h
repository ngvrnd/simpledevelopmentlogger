#ifndef SIMPLEDEVLOG
#define SIMPLEDEVLOG

/* a very simple logger, for development testing only.  Will NOT prepare breakfast.
 * Use: add "-Ddevelopment" to the compile command and output will appear on stderr
 * otherwise, compiles to nothing.  Note that the syntax is a little weird, stream
 * concatenation inside parentheses, but this is a negligible price to pay for the
 * simplicity and functionality provided.
 **/

#ifdef development
#define devlog(message) std::cerr << __FILE__<<":"<<__LINE__<<":"<<__FUNCTION__<< "\t" << message
#else
#define devlog(message)
#endif // def development
#endif // SIMPLEDEVLOG

