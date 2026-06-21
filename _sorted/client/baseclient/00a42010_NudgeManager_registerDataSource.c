// addr: 0x00a42010
// name: NudgeManager_registerDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NudgeManager_registerDataSource(void * this) */

void __thiscall NudgeManager_registerDataSource(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a NudgeDataSource and attaches it through nearby nudge manager
                       helpers during client asset/display initialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b4156;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  pvVar2 = Mem_Alloc(600);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = NudgeDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00a415f0(pvVar2);
  local_4 = 1;
  FUN_00702670((int)this + 8,uVar1);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return;
}

