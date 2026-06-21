// addr: 0x00d52fa0
// name: TiXmlElement_dtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TiXmlElement_dtor(void * this) */

void __thiscall TiXmlElement_dtor(void *this)

{
  void *in_stack_00000004;
  
                    /* Destroys a TiXmlElement by clearing its children/attributes and then running
                       base cleanup. Evidence: calls TiXmlElement_ClearThis followed by the
                       element/base destructor thunk. */
  TiXmlElement_ClearThis(this);
  TiXmlElement_CopyTo(in_stack_00000004,this);
  return;
}

