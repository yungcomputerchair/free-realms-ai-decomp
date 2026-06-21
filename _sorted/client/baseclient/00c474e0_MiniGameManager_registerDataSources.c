// addr: 0x00c474e0
// name: MiniGameManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MiniGameManager_registerDataSources(void * this) */

void __thiscall MiniGameManager_registerDataSources(void *this)

{
  char *source;
  void *pvVar1;
  void *in_stack_00000004;
  undefined4 in_stack_00000008;
  char in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Creates MiniGame GUI tables for BaseClient.MiniGame and
                       BaseClient.LastMiniGame and a MiniGameGoalDataSource. The function stores
                       them through the minigame manager helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fbe01;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  source = "BaseClient.MiniGame";
  if (in_stack_0000000c != '\0') {
    source = "BaseClient.LastMiniGame";
  }
  GuiDsTable_ctor(this,source);
  pvVar1 = (void *)0x0;
  local_4 = 0;
  *(undefined ***)this = MiniGameDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MiniGameDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MiniGameDataSource::vftable;
  *(void **)((int)this + 0x254) = in_stack_00000004;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  if (in_stack_0000000c == '\0') {
    pvVar1 = Mem_Alloc(0x270);
    local_4._0_1_ = 1;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = MiniGameGoalDataSource_ctor(pvVar1,in_stack_00000004);
    }
    local_4 = (uint)local_4._1_3_ << 8;
  }
  *(undefined4 *)((int)this + 0x25c) = 0;
  FUN_00c45cf0(pvVar1);
  *(char *)((int)this + 0x260) = in_stack_0000000c;
  ExceptionList = local_c;
  return;
}

