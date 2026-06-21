// addr: 0x007f10a0
// name: FUN_007f10a0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_007f10a0(int param_1)

{
                    /* Frees the heap pointer stored at object offset 0x38 and does not return to do
                       any additional cleanup. Exact owner type is unclear. */
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x38));
}

