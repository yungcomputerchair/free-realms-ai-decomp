// addr: 0x00a40990
// name: WhatsNewManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void WhatsNewManager_registerDataSources(void * this) */

void __thiscall WhatsNewManager_registerDataSources(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates the announcements/member-panel datasource set, including
                       WhatsNewDataSource for BaseClient.Announcements and BaseClient.MemberPanel.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b3ddb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  FUN_00a3ff00(uVar1);
  local_4 = 0;
  FUN_00a3ff00();
  local_4._0_1_ = 1;
  pvVar2 = Mem_Alloc(0x260);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = WhatsNewDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x56c) = 0;
  FUN_00a3e3a0(pvVar2);
  local_4._0_1_ = 3;
  pvVar2 = Mem_Alloc(0x260);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = WhatsNewDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)((int)this + 0x570) = 0;
  FUN_00a3e3a0(pvVar2);
  *(undefined1 *)((int)this + 0x574) = 0;
  ExceptionList = local_c;
  return;
}

