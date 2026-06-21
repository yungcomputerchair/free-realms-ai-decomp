// addr: 0x00b05cb0
// name: MountManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MountManager_registerDataSources(void * this) */

void __thiscall MountManager_registerDataSources(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates mount list and current mount datasources and stores them via
                       mount-manager helpers during ClientPcData deserialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ce797;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  FUN_00b059c0(uVar1);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x58) = DAT_01be9168;
  *(undefined4 *)((int)this + 0x5c) = DAT_01be916c;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = DAT_01be9180;
  *(undefined4 *)((int)this + 0x6c) = DAT_01be9184;
  pvVar2 = Mem_Alloc(0x2b4);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = MountListDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  FUN_00b03d40(pvVar2);
  local_4._0_1_ = 2;
  pvVar2 = Mem_Alloc(0x25c);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = CurrentMountDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)this + 0x74) = 0;
  FUN_00b03dd0(pvVar2);
  ExceptionList = local_c;
  return;
}

