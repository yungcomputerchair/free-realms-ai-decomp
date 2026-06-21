// addr: 0x014ea4c0
// name: AccountCommand_SetAchievementList_clearAchievements
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_SetAchievementList_clearAchievements(int param_1) */

void __fastcall AccountCommand_SetAchievementList_clearAchievements(int param_1)

{
  rsize_t _DstSize;
  int *piVar1;
  void *_Src;
  void *_Dst;
  int iVar2;
  int *piVar3;
  
                    /* Clears/deletes the achievement object pointer vector owned by
                       AccountCommand_SetAchievementList and compacts the vector to empty. */
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 < *(int **)(param_1 + 0xc)) {
    FUN_00d83c2d();
  }
  piVar3 = *(int **)(param_1 + 0xc);
  if (*(int **)(param_1 + 0x10) < piVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == -8) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) break;
    if (param_1 == -8) {
      FUN_00d83c2d();
    }
    if (*(int **)(param_1 + 0x10) <= piVar3) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    if (*(int **)(param_1 + 0x10) <= piVar3) {
      FUN_00d83c2d();
    }
    piVar3 = piVar3 + 1;
  }
  _Src = *(void **)(param_1 + 0x10);
  if (_Src < *(void **)(param_1 + 0xc)) {
    FUN_00d83c2d();
  }
  _Dst = *(void **)(param_1 + 0xc);
  if (*(void **)(param_1 + 0x10) < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != _Src) {
    iVar2 = *(int *)(param_1 + 0x10) - (int)_Src >> 2;
    _DstSize = iVar2 * 4;
    if (0 < iVar2) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(param_1 + 0x10) = (void *)(_DstSize + (int)_Dst);
  }
  return;
}

