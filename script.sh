find . -type f -size +100M | while read file; do
    git lfs track "$file"
done
