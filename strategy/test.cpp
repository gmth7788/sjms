#include <stdio.h>
#include "test.idl"


int main()
{
  Context * ctx = new Context();

  ConcreteStrategyA *cs1 = new ConcreteStrategyA();
  ConcreteStrategyB *cs2 = new ConcreteStrategyB();

  ctx->ContextInterface((Strategy *)cs1);
  ctx->ContextInterface((Strategy *)cs2);
  ctx->ContextInterface((Strategy *)cs1);
  ctx->ContextInterface((Strategy *)cs2);
  ctx->ContextInterface((Strategy *)cs1);

  delete cs1;
  delete cs2;
  delete ctx;
}
