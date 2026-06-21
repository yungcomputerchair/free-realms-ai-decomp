// addr: 0x012f3530
// name: PropertyString_containsChar
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyString_containsChar(char ch, undefined4 string_like) */

bool __cdecl PropertyString_containsChar(char ch,void *string_like)

{
  int iVar1;
  
                    /* Returns whether FUN_00d8d7c6 can find the supplied character in the supplied
                       string-like object/range. The function is used by the larger formatter/parser
                       at 012f3d20 before emitting output. */
  iVar1 = _fputc((int)ch,string_like);
  return iVar1 != -1;
}

