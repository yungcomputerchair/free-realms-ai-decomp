// addr: 0x00a380d0
// name: InteractionManager_registerDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void InteractionManager_registerDataSource(void * this) */

void __thiscall InteractionManager_registerDataSource(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Interactions datasource and attaches it through
                       nearby interaction manager helpers. */
  puStack_8 = &LAB_015b2871;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *(undefined ***)this = InteractionProcessor::vftable;
  *(undefined4 *)((int)this + 4) = in_stack_00000004;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = DAT_01be68f8;
  *(undefined4 *)((int)this + 0x14) = DAT_01be68fc;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 0;
  FUN_00a375b0(uVar1);
  local_4._0_1_ = 1;
  pvVar2 = Mem_Alloc(0x270);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = InteractionDataSource_ctor(pvVar2,"BaseClient.Interactions");
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00a36d50(pvVar2);
  ExceptionList = local_c;
  return;
}

