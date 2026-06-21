// addr: 0x0149acf0
// name: QueryNode_validateAndApplyChild
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool QueryNode_validateAndApplyChild(void * this, void * child) */

bool __thiscall QueryNode_validateAndApplyChild(void *this,void *child)

{
  char cVar1;
  undefined1 uVar2;
  void *local_4;
  
                    /* Calls a virtual validation hook at slot 0x10, runs a helper over this+1, and
                       if that succeeds invokes virtual slot 0x14 on the child. Called by several
                       target/query/action-node evaluators; exact base class is not named. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(child,&local_4);
  if (cVar1 != '\0') {
    local_4 = child;
    cVar1 = FUN_0149aa90((int)this + 4);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*(int *)this + 0x14))(child);
      return (bool)uVar2;
    }
  }
  return false;
}

