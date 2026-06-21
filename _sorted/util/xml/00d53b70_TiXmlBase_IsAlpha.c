// addr: 0x00d53b70
// name: TiXmlBase_IsAlpha
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int TiXmlBase_IsAlpha(char c_) */

int __cdecl TiXmlBase_IsAlpha(char c_)

{
  int iVar1;
  
                    /* TinyXML character classifier: returns _isalpha for ASCII below 0x7f and
                       accepts high-bit bytes as alphabetic. Evidence: exact code shape matches
                       TinyXML's IsAlpha helper for UTF-8-friendly names. */
  if ((byte)c_ < 0x7f) {
    iVar1 = _isalpha((uint)(byte)c_);
    return iVar1;
  }
  return 1;
}

