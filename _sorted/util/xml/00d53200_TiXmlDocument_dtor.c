// addr: 0x00d53200
// name: TiXmlDocument_dtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlDocument_dtor(void * this) */

void __thiscall TiXmlDocument_dtor(void *this)

{
  void *in_stack_00000004;
  
                    /* Destroys a TiXmlDocument by clearing all children and then running
                       document/base cleanup. Evidence: calls TiXmlNode_ClearChildren followed by
                       the document cleanup thunk. */
  TiXmlNode_ClearChildren(this);
  TiXmlDocument_CopyTo(in_stack_00000004,this);
  return;
}

