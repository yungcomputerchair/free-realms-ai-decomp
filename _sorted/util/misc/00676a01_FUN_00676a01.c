// addr: 0x00676a01
// name: FUN_00676a01
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void wrapper_copy_region_default(undefined4 a_, undefined4 b_, undefined4 c_,
   undefined4 d_) */

void wrapper_copy_region_default(undefined4 a_,undefined4 b_,undefined4 c_,undefined4 d_)

{
                    /* Thin wrapper around FUN_006716c7 that repeats the second argument and passes
                       a zero flag. Identity is not evident. */
  FUN_006716c7(a_,b_,c_,d_,b_,0);
  return;
}

