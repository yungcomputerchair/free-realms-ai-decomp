// addr: 0x008d2ba0
// name: FUN_008d2ba0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_008d2ba0(void * client) */

void __thiscall FUN_008d2ba0(void *this,void *client)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void *unaff_EDI;
  uint value_;
  char in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Ensures a client state/mode object of type 3 is current, creates one if
                       needed, applies a boolean mode, and dispatches target/state updates. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01584e9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)this + 0xec) != (undefined4 *)0x0) {
    iVar3 = (**(code **)**(undefined4 **)((int)this + 0xec))();
    if (iVar3 == 3) {
      cVar2 = (**(code **)(**(int **)((int)this + 0xec) + 0xac))();
      if (in_stack_00000014 == cVar2) goto LAB_008d2c89;
    }
  }
  value_ = 0;
  if (*(uint *)((int)this + 0xec) != 0) {
    value_ = *(uint *)((int)this + 0xec);
  }
  pvVar4 = Mem_Alloc(0x180);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = (void *)FUN_00affeb0();
  }
  uStack_4 = 0xffffffff;
  *(void **)((int)this + 0xec) = pvVar4;
  setField_78(pvVar4,value_);
  *(undefined1 *)(*(int *)((int)this + 0x1a8) + 0x88) = 0;
  (**(code **)(**(int **)((int)this + 0xec) + 0xb4))();
LAB_008d2c89:
  piVar1 = *(int **)((int)this + 0xec);
  (**(code **)(*piVar1 + 0xd4))();
  (**(code **)(*piVar1 + 0x5c))();
  FUN_008c6c10();
  ExceptionList = unaff_EDI;
  return;
}

