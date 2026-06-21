// addr: 0x0046a59d
// name: FUN_0046a59d
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void wrapper_copy_region_default(undefined4 dst_, undefined4 src_, undefined4
   count_, undefined4 value_) */

void wrapper_copy_region_default
               (undefined4 dst_,undefined4 src_,undefined4 count_,undefined4 value_)

{
                    /* Thin wrapper that forwards four arguments to FUN_00465ced, passing param_2
                       again as the fifth argument and zero as the final flag. Class/function
                       identity is not evident. */
  FUN_00465ced(dst_,src_,count_,value_,src_,0);
  return;
}

