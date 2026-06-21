// addr: 0x0122fb90
// name: FUN_0122fb90
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0122fb90(int param_1,HCURSOR param_2)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Updates the active Windows cursor from a lookup container entry. It locates
                       an entry, reads HCURSOR at node+0x10, stores it at +0x18, and calls
                       SetCursor. */
  FUN_0122e3c0(&local_8,&stack0x00000004);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((local_8 == 0) || (local_8 != param_1 + 0xc)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    param_2 = *(HCURSOR *)(local_4 + 0x10);
    *(HCURSOR *)(param_1 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0122fbed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetCursor(param_2);
    return;
  }
  return;
}

