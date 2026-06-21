// addr: 0x00992d90
// name: FUN_00992d90
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00992d90(int param_1)

{
                    /* Marks two related owner objects dirty at +0x25c, invokes their virtual update
                       hooks, then calls a global invalidation/update helper. Exact owner type is
                       unknown. */
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x25c) = 1;
  FUN_00c31fc0();
  *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0x25c) = 1;
  FUN_00c32040();
  FUN_00c33910(0);
  return;
}

