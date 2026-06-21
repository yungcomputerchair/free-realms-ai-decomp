// addr: 0x012a59a0
// name: TextReplacementList_addStringPair
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TextReplacementList_addStringPair(void * list, void * token, void *
   replacement) */

void __cdecl TextReplacementList_addStringPair(void *list,void *token,void *replacement)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_44 [56];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a replacement entry from two std::string arguments and appends it to
                       a text replacement list. Used by card description and command text expansion
                       helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166bd68;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)local_44;
  ExceptionList = &local_c;
  uVar2 = FUN_012a29e0(token,replacement);
  local_4 = 0;
  FUN_012a5380(uVar2);
  local_4 = 0xffffffff;
  FUN_012a2730(uVar1);
  ExceptionList = local_c;
  return;
}

