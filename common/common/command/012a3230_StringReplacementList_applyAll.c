// addr: 0x012a3230
// name: StringReplacementList_applyAll
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringReplacementList_applyAll(void * source, void * replacementList,
   void * outText) */

void __cdecl StringReplacementList_applyAll(void *source,void *replacementList,void *outText)

{
  void *pvVar1;
  void *needle;
  
                    /* Copies a source string to the output and applies every replacement pair from
                       a vector-like replacement list via String_replaceAll. Used by card
                       description and emit-text formatting. */
  pvVar1 = *(void **)((int)replacementList + 8);
  if (pvVar1 < *(void **)((int)replacementList + 4)) {
    FUN_00d83c2d();
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (outText,source,0,0xffffffff);
  needle = *(void **)((int)replacementList + 4);
  if (*(void **)((int)replacementList + 8) < needle) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (replacementList == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (needle == pvVar1) break;
    if (replacementList == (void *)0x0) {
      FUN_00d83c2d();
    }
    if ((*(void **)((int)replacementList + 8) <= needle) &&
       (FUN_00d83c2d(), *(void **)((int)replacementList + 8) <= needle)) {
      FUN_00d83c2d();
    }
    String_replaceAll(outText,needle,(void *)((int)needle + 0x1c));
    if (*(void **)((int)replacementList + 8) <= needle) {
      FUN_00d83c2d();
    }
    needle = (void *)((int)needle + 0x38);
  }
  return;
}

