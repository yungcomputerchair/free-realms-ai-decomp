// addr: 0x00f9ee10
// name: BinXMLReader_pastEOS
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool BinXMLReader_pastEOS(void * reader, uint byteCount_) */

bool __thiscall BinXMLReader_pastEOS(void *this,void *reader,uint byteCount_)

{
                    /* Checks whether consuming byteCount bytes would pass the reader's
                       end-of-stream bound. It compares current offset plus byteCount against the
                       stored stream limit and is used by binxml_reader.cpp PastEOS assertions. */
  if ((*(uint *)((int)this + 8) != 0) &&
     (*(uint *)((int)this + 8) < (uint)(*(int *)((int)this + 4) + (int)reader))) {
    return true;
  }
  return false;
}

