// addr: 0x00823840
// name: FUN_00823840
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00823840(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  HWND hwnd;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
                    /* Handles UI/window events: one event toggles a boolean at state+0x48 and may
                       trigger a helper, while another handles window size changes by querying
                       GetWindowInfo and storing width/height. Owning class is unknown. */
  uVar2 = FUN_00418c10(param_2);
  if (*(short *)(param_2 + 0x1c) == DAT_01bc71ec) {
    *(bool *)(*(int *)(param_1 + 0x3b0) + 0x48) = *(int *)(param_2 + 4) != 0;
    iVar1 = *(int *)(param_1 + 0x3b0);
    if ((*(char *)(iVar1 + 0x48) != '\0') && (0 < *(int *)(iVar1 + 0x40))) {
      pvVar3 = GuiObjectRegistry_findGuiFlashCtrl(*(char **)(iVar1 + 0x3c));
      if (pvVar3 != (void *)0x0) {
        FUN_00406607(0);
      }
    }
  }
  if ((*(short *)(param_2 + 0x1c) == DAT_01bc7344) &&
     (((iVar1 = *(int *)(param_2 + 4), iVar1 == 2 || (iVar1 == 4)) || (iVar1 == 6)))) {
    hwnd = (HWND)(**(code **)(*DAT_01be11d0 + 0x3c))(0,0,0);
    GetWindowInfo(hwnd,(PWINDOWINFO)&stack0xffffffb8);
    **(int **)(param_1 + 0x3b0) = iStack_2c - iStack_34;
    *(int *)(*(int *)(param_1 + 0x3b0) + 4) = iStack_28 - iStack_30;
    *(undefined4 *)(*(int *)(param_1 + 0x3b0) + 8) = 0;
    DAT_01be11ac = 1;
  }
  return uVar2;
}

