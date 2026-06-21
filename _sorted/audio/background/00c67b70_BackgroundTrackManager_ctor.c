// addr: 0x00c67b70
// name: BackgroundTrackManager_ctor
// subsystem: common/audio/background
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void BackgroundTrackManager_ctor(undefined4 * param_1) */

void __fastcall BackgroundTrackManager_ctor(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs/initializes the object. Evidence: BackgroundTrackManager::vftable.
                        */
  puStack_8 = &LAB_015ffc61;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  *param_1 = BackgroundTrackManager::vftable;
  local_4 = 2;
  puVar1 = (undefined4 *)param_1[7];
  while (puVar1 != (undefined4 *)0x0) {
    pvVar2 = (void *)*puVar1;
    puVar1 = (undefined4 *)puVar1[1];
    if (pvVar2 != (void *)0x0) {
      if (*(int **)((int)pvVar2 + 0x10) != (int *)0x0) {
        (**(code **)(**(int **)((int)pvVar2 + 0x10) + 0xc))(1);
        if (*(undefined4 **)((int)pvVar2 + 0x10) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)((int)pvVar2 + 0x10))(1);
        }
        *(undefined4 *)((int)pvVar2 + 0x10) = 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
  }
  FUN_00c67350(uVar3);
  puVar1 = (undefined4 *)param_1[3];
  do {
    if (puVar1 == (undefined4 *)0x0) {
      FUN_00c67350();
      local_4._0_1_ = 1;
      param_1[10] = SoeUtil::List<BackgroundTrack*,-1>::vftable;
      FUN_00c67350();
      local_4 = (uint)local_4._1_3_ << 8;
      param_1[6] = SoeUtil::List<BackgroundTrack*,-1>::vftable;
      FUN_00c67350();
      local_4 = 0xffffffff;
      param_1[2] = SoeUtil::List<BackgroundTrack*,-1>::vftable;
      FUN_00c67350();
      ExceptionList = local_c;
      return;
    }
    pvVar2 = (void *)*puVar1;
    puVar1 = (undefined4 *)puVar1[1];
  } while (pvVar2 == (void *)0x0);
  if (*(int **)((int)pvVar2 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)((int)pvVar2 + 0x10) + 0xc))(1);
    if (*(undefined4 **)((int)pvVar2 + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)pvVar2 + 0x10))(1);
    }
    *(undefined4 *)((int)pvVar2 + 0x10) = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar2);
}

