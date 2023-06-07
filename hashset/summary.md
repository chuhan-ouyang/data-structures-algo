# Hash Set Notes

## Intersection Op Space
### hint:
* commonly occuring across a list
### key:
* only include in res if something appears across all
* but we don't want to turn everything into a hashset and then iterate through the hashset again to compute the intersection
* we want to turn one into a hashset (the intersection **must be a subset of this hashset**)
* then iterate throught the following elements, and if they also apperar in the hashset, then this element appear in both and can be added to res
* remember: if you have two set of structures, and you want to find an intersection or sum == 0, basically iterate through one structure and use O(1) lookup time to find whether something in the other structure exist, or say that the end result will only be an intersection, so must be a subset of the first structure, and then do more checking on the second structure, you don't need two hashsets! You only need one for one structure, and then iterate thorugh the second to create the subset/intersection effect
### problems:
  * uniq occur
  * array inters
 
## Other Notes:
* if for sure justh have 26 chars (no capitalization issues), fastest to use raw array as hashset
  * int record[26] = {0}; when encouter.. record[t[i] - 'a']++
*  
  