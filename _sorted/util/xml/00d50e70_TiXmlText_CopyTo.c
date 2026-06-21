// addr: 0x00d50e70
// name: TiXmlText_CopyTo
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlText_CopyTo(void * this, void * target) */

void __thiscall TiXmlText_CopyTo(void *this,void *target)

{
                    /* Copies TiXmlText base node state and the text-specific CDATA flag at offset
                       0x2c into another text node. Evidence: the text clone path allocates
                       TiXmlText, constructs it, then calls this helper; it wraps the common TinyXML
                       base copy helper and copies one text-specific byte. */
  FUN_00d50820(target);
  *(undefined1 *)((int)target + 0x2c) = *(undefined1 *)((int)this + 0x2c);
  return;
}

