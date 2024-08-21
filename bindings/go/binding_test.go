package tree_sitter_python_docstring_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-python_docstring"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_python_docstring.Language())
	if language == nil {
		t.Errorf("Error loading PythonDocstring grammar")
	}
}
