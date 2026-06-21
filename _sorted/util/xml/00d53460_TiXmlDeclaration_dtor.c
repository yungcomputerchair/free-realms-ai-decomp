// addr: 0x00d53460
// name: TiXmlDeclaration_dtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlDeclaration_dtor(void * this) */

void __fastcall TiXmlDeclaration_dtor(void *this)

{
                    /* Destroys a TiXmlDeclaration by clearing any child nodes and running the
                       declaration/base cleanup helper. Evidence: same node-derived destructor
                       shape, with declaration-specific helper 00d52620. */
  TiXmlNode_ClearChildren(this);
  FUN_00d52620(this);
  return;
}

