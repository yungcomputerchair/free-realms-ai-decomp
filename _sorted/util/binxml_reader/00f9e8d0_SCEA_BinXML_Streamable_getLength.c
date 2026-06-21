// addr: 0x00f9e8d0
// name: SCEA_BinXML_Streamable_getLength
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SCEA_BinXML_Streamable_getLength(void * this) */

uint __fastcall SCEA_BinXML_Streamable_getLength(void *this)

{
  uint uVar1;
  
                    /* Skips through aliased Streamable wrappers and tail-calls the underlying
                       virtual length/accessor at vtable slot +4. It is used by String_StrLen and
                       flattening code to measure stored data. */
  for (; (char)*(int *)((int)this + 4) != '\0'; this = *(void **)((int)this + 0xc)) {
  }
                    /* WARNING: Could not recover jumptable at 0x00f9e8e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)this + 4))();
  return uVar1;
}

