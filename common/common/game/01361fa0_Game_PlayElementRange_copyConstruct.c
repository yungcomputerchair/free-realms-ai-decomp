// addr: 0x01361fa0
// name: Game_PlayElementRange_copyConstruct
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * Game_PlayElementRange_copyConstruct(undefined4 * dst, undefined4
   * src) */

undefined4 * __thiscall
Game_PlayElementRange_copyConstruct(void *this,undefined4 *dst,undefined4 *src)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a small range/iterator value by copying the first word and
                       copy-constructing the subobject at +4 via FUN_0135df60. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167efcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *dst;
  FUN_0135df60(dst + 1);
  ExceptionList = local_c;
  return this;
}

