// addr: 0x00d8a5bd
// name: _V6_HeapAlloc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

undefined4 _V6_HeapAlloc(uint param_1)

{
  undefined4 local_20;
  
  local_20 = 0;
  if (param_1 <= DAT_01cbef7c) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_00d8a603();
  }
  return local_20;
}

