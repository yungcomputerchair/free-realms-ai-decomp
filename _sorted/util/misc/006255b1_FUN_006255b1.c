// addr: 0x006255b1
// name: FUN_006255b1
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void wrapper_copy_region_default(undefined4 a_, undefined4 b_, undefined4 c_,
   undefined4 d_) */

void wrapper_copy_region_default(undefined4 a_,undefined4 b_,undefined4 c_,undefined4 d_)

{
                    /* Thin forwarding wrapper that calls FUN_006210fd with the second argument
                       repeated and a final zero flag. Identity is not evident from this context. */
  FUN_006210fd(a_,b_,c_,d_,b_,0);
  return;
}

