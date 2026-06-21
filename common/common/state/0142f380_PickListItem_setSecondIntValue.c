// addr: 0x0142f380
// name: PickListItem_setSecondIntValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PickListItem_setSecondIntValue(void * this, int value_) */

void __thiscall PickListItem_setSecondIntValue(void *this,int value_)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a ValueData object at +0x10, sets it to integer type 2, and
                       stores the supplied value. Exact item/field meaning is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016960bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x10) == 0) {
    pvVar2 = Mem_Alloc(0xc);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_012fa910();
    }
    *(undefined4 *)((int)this + 0x10) = uVar3;
  }
  local_4 = 0xffffffff;
  iVar1 = *(int *)((int)this + 0x10);
  FUN_01300680(2);
  *(int *)(iVar1 + 8) = value_;
  ExceptionList = local_c;
  return;
}

