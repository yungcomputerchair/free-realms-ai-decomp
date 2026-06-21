// addr: 0x00d44dd0
// name: FUN_00d44dd0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00d44dd0(int param_1)

{
                    /* Ensures a runtime terrain/global state flag is enabled: if a
                       terrain-dependent byte is set it delegates to another helper, otherwise it
                       calls a global enable routine once and records a byte at this+0x4bc. */
  if ((*(int *)(param_1 + 0x18) != 0) && (*(char *)(*(int *)(param_1 + 0x18) + 0xc7e21) != '\0')) {
    FUN_00d44250();
    return;
  }
  if (*(char *)(param_1 + 0x4bc) == '\0') {
    FUN_00705200(1);
    *(undefined1 *)(param_1 + 0x4bc) = 1;
  }
  return;
}

