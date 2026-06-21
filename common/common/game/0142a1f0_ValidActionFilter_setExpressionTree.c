// addr: 0x0142a1f0
// name: ValidActionFilter_setExpressionTree
// subsystem: common/common/game
// source (binary assert): common/common/game/ValidActionFilter.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValidActionFilter_setExpressionTree(void * this, void * expressionTree,
   int flags_) */

void __thiscall ValidActionFilter_setExpressionTree(void *this,void *expressionTree,int flags_)

{
                    /* Installs a non-null expression tree into a ValidActionFilter and marks it
                       present/owned before storing an additional flag/value. */
  if (expressionTree == (void *)0x0) {
    FUN_012f5a60("expressionTree","..\\common\\common\\game\\ValidActionFilter.cpp",0x32);
  }
  *(void **)((int)this + 0x48) = expressionTree;
  *(undefined1 *)((int)this + 0x4c) = 1;
  *(int *)((int)this + 0x50) = flags_;
  return;
}

