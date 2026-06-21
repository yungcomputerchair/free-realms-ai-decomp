// addr: 0x012f3cc0
// name: String_replaceCharInPlace
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void String_replaceCharInPlace(void * text, char fromChar_, char toChar_) */

void __cdecl String_replaceCharInPlace(void *text,char fromChar_,char toChar_)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 in_stack_0000000d;
  
  cVar1 = fromChar_;
                    /* Replaces all occurrences of one character in a std::string with another,
                       looping with a string find helper and replacing one byte at each match.
                       Caller 012f4720 uses it to normalize backslashes to forward slashes in paths.
                        */
  iVar3 = FUN_01231320(&fromChar_,0,1);
  uVar2 = _toChar_;
  fromChar_ = cVar1;
  for (; iVar3 != -1; iVar3 = FUN_01231320(&fromChar_,iVar3,1)) {
    FUN_012f37f0(iVar3,1,1,uVar2);
  }
  return;
}

