// addr: 0x01362960
// name: Game_PlayElementRange_copyConstruct2
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * Game_PlayElementRange_copyConstruct2(undefined4 * dst, undefined4
   * src) */

undefined4 * __thiscall
Game_PlayElementRange_copyConstruct2(void *this,undefined4 *dst,undefined4 *src)

{
  undefined4 *src_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Second copy-constructor wrapper for the same play-element range shape,
                       copying the leading word and constructing the member at +4. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167f19b;
  local_c = ExceptionList;
  src_00 = (undefined4 *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  *(undefined4 *)this = *dst;
  Game_PlayElementRange_copyConstruct((void *)((int)this + 4),dst + 1,src_00);
  ExceptionList = local_c;
  return this;
}

