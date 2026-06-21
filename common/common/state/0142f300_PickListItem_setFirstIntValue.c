// addr: 0x0142f300
// name: PickListItem_setFirstIntValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PickListItem_setFirstIntValue(void * this, int value_) */

void __thiscall PickListItem_setFirstIntValue(void *this,int value_)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates a ValueData object at +0xc, sets it to integer type 2, and
                       stores the supplied value. Exact item/field meaning is not named. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169608b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0xc) == 0) {
    pvVar2 = Mem_Alloc(0xc);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_012fa910();
    }
    *(undefined4 *)((int)this + 0xc) = uVar3;
  }
  local_4 = 0xffffffff;
  iVar1 = *(int *)((int)this + 0xc);
  FUN_01300680(2);
  *(int *)(iVar1 + 8) = value_;
  ExceptionList = local_c;
  return;
}

