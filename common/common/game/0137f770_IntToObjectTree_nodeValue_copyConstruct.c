// addr: 0x0137f770
// name: IntToObjectTree_nodeValue_copyConstruct
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * IntToObjectTree_nodeValue_copyConstruct(undefined4 * dst,
   undefined4 * src, undefined4 valueSrc_) */

undefined4 * __thiscall
IntToObjectTree_nodeValue_copyConstruct
          (void *this,undefined4 *dst,undefined4 *src,undefined4 valueSrc_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs an integer-keyed tree node value by copying the key word and
                       copy-constructing the value/list from an explicit source. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016823bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *dst;
  EventCommand_ValueList_copyConstruct((void *)((int)this + 4),src);
  ExceptionList = local_c;
  return this;
}

