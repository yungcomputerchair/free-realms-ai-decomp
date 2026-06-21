// addr: 0x0149e7b0
// name: ActionNode_invokeActionHandler
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionNode_invokeActionHandler(void * this, void * context) */

void __thiscall ActionNode_invokeActionHandler(void *this,void *context)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* Invokes the action handler stored at context+0x48, passing ActionNode fields
                       at 0x14, 0x18, and 0x1c plus an id read from another object. */
  iVar1 = *(int *)((int)context + 0x48);
  uVar2 = PlayElement_getId();
  (**(code **)(iVar1 + 4))
            (*(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x18),context,
             *(undefined4 *)((int)this + 0x1c),uVar2);
  return;
}

