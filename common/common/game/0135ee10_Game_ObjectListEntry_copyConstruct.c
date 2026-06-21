// addr: 0x0135ee10
// name: Game_ObjectListEntry_copyConstruct
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * Game_ObjectListEntry_copyConstruct(undefined4 * dst, undefined4 *
   src) */

undefined4 * __thiscall
Game_ObjectListEntry_copyConstruct(void *this,undefined4 *dst,undefined4 *src)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a small entry by copying the first word and copy-constructing
                       the contained member at +4 through FUN_01335270. The exact container/member
                       type is not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167e8db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *dst;
  FUN_01335270(dst + 1);
  ExceptionList = local_c;
  return this;
}

