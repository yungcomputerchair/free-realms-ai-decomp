// addr: 0x00807f30
// name: FUN_00807f30
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00807f30(int param_1)

{
                    /* Clears three SkyDefinition tinted-texture-like subobjects at offsets
                       0x10/0xa0/0x130 and resets a trailing time/state field. No final class
                       evidence, so left unnamed. */
  FUN_00806660(param_1 + 0x10);
  FUN_00806660(param_1 + 0xa0);
  FUN_00806660(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x1c0) = _DAT_0175b420;
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  return;
}

