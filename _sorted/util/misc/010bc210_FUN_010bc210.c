// addr: 0x010bc210
// name: FUN_010bc210
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_010bc210(void *param_1,int param_2)

{
  uint *_Memory;
  uint unaff_EDI;
  
                    /* Releases or removes an object found by key, invoking cleanup and collection
                       unlink helpers. */
  _Memory = lookup_1024_hash_canonical_node(param_1,param_2,unaff_EDI);
  if (_Memory == (uint *)0x0) {
    return 0;
  }
  FUN_010bb300(_Memory);
  cleanup_path_manager_helper();
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

