// addr: 0x013ba5c0
// name: FUN_013ba5c0
// subsystem: common/networking/uchat_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_013ba5c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < *(uint *)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) < uVar2) {
    FUN_00d83c2d();
  }
  FUN_013ba4d0(local_8,param_1,uVar2,param_1,uVar1);
  return;
}

