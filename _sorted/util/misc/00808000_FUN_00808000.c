// addr: 0x00808000
// name: FUN_00808000
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00808000(int param_1)

{
                    /* Clears three SkyDefinition two-texture-like subobjects at offsets
                       0x10/0x80/0xf0 and resets a trailing time/state field. No final class
                       evidence, so left unnamed. */
  FUN_00806720(param_1 + 0x10);
  FUN_00806720(param_1 + 0x80);
  FUN_00806720(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x160) = _DAT_0175b420;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return;
}

