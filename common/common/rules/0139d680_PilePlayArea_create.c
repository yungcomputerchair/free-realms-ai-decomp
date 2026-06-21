// addr: 0x0139d680
// name: PilePlayArea_create
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall PilePlayArea_create(void *param_1,void *param_2)

{
  void *ownerOrParent_;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Allocates and constructs a PilePlayArea, sets its zone owner, and registers
                       it in the game element map. */
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_01685441;
  local_c = ExceptionList;
  ownerOrParent_ = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  FUN_01340230(param_1,param_2,(int)ownerOrParent_);
  pvVar1 = Mem_Alloc(0x48);
  local_4 = (void *)0x0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PilePlayArea_ctor(pvVar1);
  }
  local_4 = (void *)0xffffffff;
  *(void **)((int)param_1 + 0x48) = pvVar1;
  PlayElement_setZoneOwner(pvVar1,*(int *)((int)param_1 + 0x40));
  (**(code **)(**(int **)((int)param_1 + 0x48) + 0x40))(param_2);
  FUN_01340300(*(void **)((int)param_1 + 0x48),3);
  pvVar1 = Mem_Alloc(0x48);
  puStack_8 = (undefined1 *)0x1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PilePlayArea_ctor(pvVar1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  *(void **)((int)param_1 + 0x4c) = pvVar1;
  PlayElement_setZoneOwner(pvVar1,*(int *)((int)param_1 + 0x40));
  (**(code **)(**(int **)((int)param_1 + 0x4c) + 0x40))(param_2);
  local_4 = Mem_Alloc(0x48);
  local_c = (void *)0x2;
  if (local_4 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PilePlayArea_ctor(local_4);
  }
  local_c = (void *)0xffffffff;
  *(void **)((int)param_1 + 0x50) = pvVar1;
  PlayElement_setZoneOwner(pvVar1,*(int *)((int)param_1 + 0x40));
  (**(code **)(**(int **)((int)param_1 + 0x50) + 0x40))(param_2);
  ExceptionList = ownerOrParent_;
  return 1;
}

