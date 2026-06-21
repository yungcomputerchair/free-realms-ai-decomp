// addr: 0x00c7ca80
// name: QuestManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void QuestManager_registerDataSources(void * this) */

void __thiscall QuestManager_registerDataSources(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers quest-related datasources, including quest data/rewards, quest
                       objectives, and miscellaneous quest objective databook entries. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016036cf;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  FUN_00c7c9c0(uVar1);
  *(undefined4 *)((int)this + 0x10f4) = 0xffffffff;
  *(undefined1 *)((int)this + 0x10f8) = 0;
  *(undefined4 *)((int)this + 0x10fc) = 0;
  *(undefined4 *)((int)this + 0x1100) = 0;
  *(undefined4 *)((int)this + 0x1104) = 0;
  *(undefined4 *)((int)this + 0x1108) = 0;
  *(undefined4 *)((int)this + 0x110c) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x1110) = 0;
  local_4._0_1_ = 3;
  pvVar2 = Mem_Alloc(0x264);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    if (in_stack_00000004 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)in_stack_00000004 + 4;
    }
    uVar3 = FUN_00c33b30("BaseClient.QuestData.Reward",iVar4,
                         *(undefined4 *)((int)in_stack_00000004 + 0x770));
  }
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 0x1114) = 0;
  FUN_00992960(uVar3);
  local_4._0_1_ = 5;
  pvVar2 = Mem_Alloc(0x260);
  local_4._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = QuestDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 5;
  FUN_00c7a030(pvVar2);
  pvVar2 = Mem_Alloc(0x260);
  local_4._0_1_ = 7;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = QuestObjectiveDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4._0_1_ = 5;
  FUN_00c7a0a0(pvVar2);
  pvVar2 = Mem_Alloc(0x260);
  local_4._0_1_ = 8;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = QuestObjectiveDataSource_ctor(pvVar2,in_stack_00000004);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00c7a0a0(pvVar2);
  ExceptionList = local_c;
  return;
}

