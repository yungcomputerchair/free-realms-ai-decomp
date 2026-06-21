// addr: 0x01361f40
// name: Game_SelectionRange_copyConstruct
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * Game_SelectionRange_copyConstruct(undefined4 * dst, undefined4 *
   src) */

undefined4 * __thiscall
Game_SelectionRange_copyConstruct(void *this,undefined4 *dst,undefined4 *src)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a small range/iterator value by copying the first word and
                       copy-constructing the subobject at +4 via FUN_0135e190. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ef9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *dst;
  FUN_0135e190(dst + 1);
  ExceptionList = local_c;
  return this;
}

