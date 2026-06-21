// addr: 0x012a1e30
// name: String_uppercaseFirstCharInPlace
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void String_uppercaseFirstCharInPlace(void * text) */

void __cdecl String_uppercaseFirstCharInPlace(void *text)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
                    /* Uppercases the first character of a small-string-optimized std::string in
                       place, handling both inline and heap-backed storage. Evidence is the _toupper
                       call on the first character and write back to the string buffer. */
  piVar3 = (int *)((int)text + 4);
  piVar1 = piVar3;
  if (0xf < *(uint *)((int)text + 0x18)) {
    piVar1 = (int *)*piVar3;
  }
  iVar2 = _toupper((int)(char)*piVar1);
  if (0xf < *(uint *)((int)text + 0x18)) {
    piVar3 = (int *)*piVar3;
  }
  *(char *)piVar3 = (char)iVar2;
  return;
}

