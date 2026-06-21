// addr: 0x00bdd4f0
// name: ProgressiveQuestManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProgressiveQuestManager_registerDataSources(void * this) */

void __thiscall ProgressiveQuestManager_registerDataSources(void *this)

{
  void *pvVar1;
  void *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Creates progressive quest datasources for quest state, slots, and prize
                       slots, then stores them through nearby progressive-quest manager helpers. */
  puStack_8 = &LAB_015ef882;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)this = in_stack_00000004;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uStack_3 = 0;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x10) = 0;
  pvVar1 = Mem_Alloc(0x25c);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ProgressiveQuestDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4 = 2;
  FUN_00bdcbf0(pvVar1);
  pvVar1 = Mem_Alloc(0x25c);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ProgressiveQuestSlotsDataSource_ctor(pvVar1,in_stack_00000004);
  }
  local_4 = 2;
  FUN_00bdcc60(pvVar1);
  pvVar1 = Mem_Alloc(0x25c);
  local_4 = 5;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ProgressiveQuestPrizeSlotsDataSource_ctor(pvVar1,in_stack_00000004);
  }
  _local_4 = CONCAT31(uStack_3,2);
  FUN_00bdccd0(pvVar1);
  ExceptionList = local_c;
  return;
}

