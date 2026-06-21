// addr: 0x00d522f0
// name: TiXmlComment_dtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlComment_dtor(void * this) */

void __fastcall TiXmlComment_dtor(void *this)

{
                    /* Destroys a TiXmlComment by clearing children and then running the base
                       TinyXML cleanup thunk. Evidence: calls TiXmlNode_ClearChildren followed by
                       the base destructor thunk. */
  TiXmlNode_ClearChildren(this);
  thunk_FUN_00d50820(this);
  return;
}

